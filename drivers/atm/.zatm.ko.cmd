cmd_drivers/atm/zatm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/atm/zatm.ko drivers/atm/zatm.o drivers/atm/zatm.mod.o ;  true
