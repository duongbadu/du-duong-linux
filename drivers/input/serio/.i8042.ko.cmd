cmd_drivers/input/serio/i8042.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/serio/i8042.ko drivers/input/serio/i8042.o drivers/input/serio/i8042.mod.o ;  true
