target remote localhost:3333
load output/rom.riscv
load output/hello.riscv
set $pc=0x1000000
set *((int *)0x81FFFFFB) = 0x800018c0
c
quit
