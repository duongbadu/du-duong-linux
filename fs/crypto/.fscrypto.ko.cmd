cmd_fs/crypto/fscrypto.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/crypto/fscrypto.ko fs/crypto/fscrypto.o fs/crypto/fscrypto.mod.o ;  true
