cmd_net/strparser/strparser.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/strparser/strparser.ko net/strparser/strparser.o net/strparser/strparser.mod.o ;  true
