cmd_drivers/mtd/redboot.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/redboot.ko drivers/mtd/redboot.o drivers/mtd/redboot.mod.o ;  true
