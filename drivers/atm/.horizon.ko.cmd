cmd_drivers/atm/horizon.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/atm/horizon.ko drivers/atm/horizon.o drivers/atm/horizon.mod.o ;  true
