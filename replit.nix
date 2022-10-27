{ pkgs }: {
	deps = [
		pkgs.gcc_debug
  pkgs.libgccjit
  pkgs.mef
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}