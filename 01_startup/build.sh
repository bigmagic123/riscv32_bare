#riscv-nuclei-elf-gcc -O2 -g
rm *.o *.o.d *elf -rf
riscv-nuclei-elf-gcc -O2 -g -march=rv32imac -mabi=ilp32 -mcmodel=medany -ffunction-sections -fdata-sections -fno-common -DDOWNLOAD_MODE=DOWNLOAD_MODE_FLASHXIP -I. -MMD -MT entry.o -MF entry.o.d -c -o entry.o entry.S
riscv-nuclei-elf-gcc -O2 -g -march=rv32imac -mabi=ilp32 -mcmodel=medany -ffunction-sections -fdata-sections -fno-common -DDOWNLOAD_MODE=DOWNLOAD_MODE_FLASHXIP -I. -MMD -MT intexc.o -MF intexc.o.d -c -o intexc.o intexc.S
riscv-nuclei-elf-gcc -O2 -g -march=rv32imac -mabi=ilp32 -mcmodel=medany -ffunction-sections -fdata-sections -fno-common -DDOWNLOAD_MODE=DOWNLOAD_MODE_FLASHXIP -I. -MMD -MT main.o -MF mian.o.d -c -o main.o main.c
riscv-nuclei-elf-ld -o hello.elf -Tlink.ld entry.o intexc.o main.o


