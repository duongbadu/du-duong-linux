cmd_fs/nls/nls_ascii.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/nls/nls_ascii.ko fs/nls/nls_ascii.o fs/nls/nls_ascii.mod.o ;  true
