ifdef OS
    include Makefile.windows
else
	ifeq ($(OS),Linux)
		include Makefile.linux
	endif
	ifeq ($(OS),Darwin)
		include Makefile.osx
	endif
endif
