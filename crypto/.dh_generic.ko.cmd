cmd_crypto/dh_generic.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/dh_generic.ko crypto/dh_generic.o crypto/dh_generic.mod.o ;  true
