xlen ?= 64
linesize=$$(($(xlen)/8))
target ?= CUSTOM
march ?= imafdc
debug ?= -DDEBUG
RISCV_PREFIX ?= riscv$(xlen)-unknown-elf-
RISCV_GCC ?= $(RISCV_PREFIX)gcc
RISCV_HEX = elf2hex 8 32768
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump -D
OUTDIR ?= output


.PHONY: rom
rom:
	@echo "Compiling Rom."
	@mkdir -p output/
	$(RISCV_GCC) -I./common -DCONFIG_RISCV64=True ${debug} -DCSF_ADDRESS=0x800018c0 -DPK_STORE_ADDR=0x80008008 \
				-D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math -g\
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/link.ld -o $(OUTDIR)/rom.riscv ./rom.c \
				 ./sha256.c ./crypto/RSA/bignum.c ./crypto/RSA/rsa.c ./common/syscalls.c ./common/rom_crt.S
	@$(RISCV_OBJDUMP) --source $(OUTDIR)/rom.riscv > $(OUTDIR)/rom.dump
	@elf2hex 8 4096 $(OUTDIR)/rom.riscv 16777216 > $(OUTDIR)/boot.hex
	@cut -c1-8 $(OUTDIR)/boot.hex > ../bin/boot.MSB
	@cut -c9-16 $(OUTDIR)/boot.hex > ../bin/boot.LSB

.PHONY: hello
hello:
	@echo "Compiling Hello-Shakti"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./hello -DCONFIG_RISCV64=True \
				-D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/hlink.ld -o $(OUTDIR)/hello.riscv ./hello.c \
				  ./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/hello.riscv > $(OUTDIR)/hello.dump
	@$(RISCV_HEX) $(OUTDIR)/hello.riscv 2147483648 > $(OUTDIR)/code.mem

.PHONY: hello-csf
hello-csf:
	@echo "Compiling Hello-Shakti"
	@mkdir -p output/
	$(RISCV_GCC) -I./common -I./hello -DCONFIG_RISCV64=True \
				-D$(target)=True -mcmodel=medany -static -std=gnu99 -O2 -ffast-math \
				-fno-common -fno-builtin-printf -march=rv$(xlen)$(march) -w -static \
				-nostartfiles -lgcc -T ./common/hlink.ld -o $(OUTDIR)/hello.riscv ./hello.c \
				  ./csf.S ./common/syscalls.c ./common/crt.S
	@$(RISCV_OBJDUMP) $(OUTDIR)/hello.riscv > $(OUTDIR)/hello.dump
	@$(RISCV_HEX) $(OUTDIR)/hello.riscv 2147483648 > $(OUTDIR)/code.mem



.PHONY: simulate
simulate:
	spike -m0x01000000:0x2000000,0x80000000:0x2000000 --rbb-port=9824 -H output/hello.riscv

.PHONY: clean
clean:
	rm -rf $(OUTDIR)


.PHONY: all
all: clean rom hello-csf simulate
