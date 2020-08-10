target remote localhost:3333
load output/rom.riscv
load output/hello.riscv
set $pc=0x1000000
set *((int *)0x81FFFFFB) = 0x80001940
c
quit
