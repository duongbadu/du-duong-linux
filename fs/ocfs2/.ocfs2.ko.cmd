cmd_fs/ocfs2/ocfs2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/ocfs2/ocfs2.ko fs/ocfs2/ocfs2.o fs/ocfs2/ocfs2.mod.o ;  true
