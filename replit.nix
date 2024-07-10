{ pkgs }: {
	deps = [
   pkgs.zulu
   pkgs.vim
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}