MEMORY
{
    rom(rx) : ORIGIN = 0x08000000, LENGTH = 256K
    ram(rwx) : ORIGIN = 0x20000000, LENGTH = 64K
}

STACK_SIZE = 0x2000;
ENTRY(Reset_Handler)

SECTIONS
{

    /* Program code and read-only data */
    .text : {
        _stext = .;
        KEEP(*(.isr_vector))
        *(.text*)
        *(.rodata*)
        _etext = .;
    } > rom

    /* Initialized data in RAM */
    .data : {
        _sdata = .;
        *(.data*)
        _edata = .;
    } > ram AT > rom

    /* Uninitialized data in RAM */
    .bss (NOLOAD) : {
        _sbss = .;
        *(.bss*)
        *(COMMON)
        _ebss = .;
    } > ram

    /* Stack section in RAM */
    .stack (NOLOAD) : {
        . = ALIGN(8);
        _sstack = .;
        . = . + STACK_SIZE;
        . = ALIGN(8);
        _estack = .;
    } > ram
}
