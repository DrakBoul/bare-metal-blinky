make:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb ./project/startup.c ./project/main.c -c
	mv *.o ./build/./
	arm-none-eabi-gcc -T ./project/link.ld -nostdlib ./build/startup.o ./build/main.o -o ./build/firmware.elf
	arm-none-eabi-objcopy -O binary ./build/firmware.elf ./build/firmware.bin
	st-flash --reset write ./build/firmware.bin 0x08000000

build:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb ./project/startup.c ./project/main.c -c
	mv *.o ./build/./
	arm-none-eabi-gcc -T ./project/link.ld -nostdlib ./build/startup.o ./build/main.o -o ./build/firmware.elf
	arm-none-eabi-objcopy -O binary ./build/firmware.elf ./build/firmware.bin

flash:
	st-flash --reset write ./build/firmware.bin 0x08000000

inspect:
	arm-none-eabi-objdump -d ./build/firmware.elf
	arm-none-eabi-objdump -t ./build/firmware.elf

clean:
	rm ./build/*

