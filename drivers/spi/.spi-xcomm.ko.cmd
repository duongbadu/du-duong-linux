cmd_drivers/spi/spi-xcomm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-xcomm.ko drivers/spi/spi-xcomm.o drivers/spi/spi-xcomm.mod.o ;  true
