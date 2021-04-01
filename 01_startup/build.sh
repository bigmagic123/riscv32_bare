riscv-nuclei-elf-gcc -nostdlib -c entry.s -o entry.o
riscv-nuclei-elf-gcc -nostdlib -c main.c -o main.o
riscv-nuclei-elf-ld -o hello.elf -Tlink.ld entry.o main.o
