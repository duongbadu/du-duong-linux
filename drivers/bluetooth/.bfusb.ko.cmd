cmd_drivers/bluetooth/bfusb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/bfusb.ko drivers/bluetooth/bfusb.o drivers/bluetooth/bfusb.mod.o ;  true
