#define SIGN_CBZHANG_L1 "     _____   _____   ______  _   _       ___   __   _   _____  "
#define SIGN_CBZHANG_L2 "    /  ___| |  _  \\ |___  / | | | |     /   | |  \\ | | /  ___| "
#define SIGN_CBZHANG_L3 "    | |     | |_| |    / /  | |_| |    / /| | |   \\| | | |     "
#define SIGN_CBZHANG_L4 "    | |     |  _  {   / /   |  _  |   / / | | | |\\   | | |  _  "
#define SIGN_CBZHANG_L5 "    | |___  | |_| |  / /__  | | | |  / /  | | | | \\  | | |_| | "
#define SIGN_CBZHANG_L6 "    \\_____| |_____/ /_____| |_| |_| /_/   |_| |_|  \\_| \\_____/ "

#define PRINT_SIGN_CBZHANG(io) \
    { \
        fprintf(io, "%s\n", SIGN_CBZHANG_L1); \
        fprintf(io, "%s\n", SIGN_CBZHANG_L2); \
        fprintf(io, "%s\n", SIGN_CBZHANG_L3); \
        fprintf(io, "%s\n", SIGN_CBZHANG_L4); \
        fprintf(io, "%s\n", SIGN_CBZHANG_L5); \
        fprintf(io, "%s\n", SIGN_CBZHANG_L6); \
	fprintf(io, "\n");		      \
    }

