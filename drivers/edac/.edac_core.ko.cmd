cmd_drivers/edac/edac_core.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/edac/edac_core.ko drivers/edac/edac_core.o drivers/edac/edac_core.mod.o ;  true
