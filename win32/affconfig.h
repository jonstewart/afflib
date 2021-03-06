/* This file is for compiling afflib using Microsoft Visual C++ */

#undef C_ALLOCA 
#undef DISABLE_QEMU
#undef HAVE_ALLOCA_H 
#undef HAVE_CTYPE_H 
#undef HAVE_CURSES_H 
#undef HAVE_DIRENT_H 
#undef HAVE_ERR 
#undef HAVE_ERRX 
#undef HAVE_ERR_H 
#undef HAVE_GETPROGNAME 
#undef HAVE_INTTYPES_H 
#undef HAVE_LINUX_FS_H 
#undef HAVE_MALLOC_H 
#undef HAVE_NCURSES_TERM_H 
#undef HAVE_NDIR_H
#undef HAVE_OPENSSL_FIPS_SHA_H 
#undef HAVE_POPEN 
#undef HAVE_SETUPTERM 
#undef HAVE_SHA256_H
#undef HAVE_STRINGS_H 
#undef HAVE_STRLCAT 
#undef HAVE_STRLCPY 
#undef HAVE_SYS_CDEFS_H 
#undef HAVE_SYS_DIR_H 
#undef HAVE_SYS_DISK_H 
#undef HAVE_SYS_IOCTL_H 
#undef HAVE_SYS_NDIR_H 
#undef HAVE_SYS_PARAM_H 
#undef HAVE_SYS_SOCKET_H 
#undef HAVE_SYS_TIME_H 
#undef HAVE_SYS_VFS_H 
#undef HAVE_TERMCAP_H 
#undef HAVE_TERM_H 
#undef HAVE_UNISTD_H 
#undef HAVE_VALLOC 
#undef HAVE_WARN 
#undef HAVE_WARNX 
#undef TM_IN_SYS_TIME 
#undef USE_S3 
#undef USE_QEMU
#undef USE_SPARSEIMAGE
#undef HAVE_STDINT_H
#undef HAVE_INTTYPES_H
#undef HAVE_LIBNCUSES
#undef HAVE_PUTENV
#undef HAVE_READLINE_READLINE_H
#undef HAVE_LIBREADLINE
#undef HAVE_ARPA_INET_H
#undef HAVE_SYS_FILE_H
#undef HAVE_FLOCK
#undef HAVE_INTTYPES_H

#ifdef USE_EWF
#define HAVE_LIBEWF 1
/* Define to 1 if you have the libewf_get_bytes_per_sector function. */
#define HAVE_LIBEWF_GET_BYTES_PER_SECTOR 1
/* Define to 1 if libewf_get_bytes_per_sector takes value as an argument. */
#define HAVE_LIBEWF_GET_BYTES_PER_SECTOR_ARGUMENT_VALUE 1
/* Define to 1 if you have the libewf_get_chunk_size function. */
#define HAVE_LIBEWF_GET_CHUNK_SIZE 1
/* Define to 1 if libewf_get_chunk_size takes value as an argument. */
#define HAVE_LIBEWF_GET_CHUNK_SIZE_ARGUMENT_VALUE 1
/* Define to 1 if you have the libewf_get_media_size function. */
#define HAVE_LIBEWF_GET_MEDIA_SIZE 1
/* Define to 1 if libewf_get_media_size takes value as an argument. */
#define HAVE_LIBEWF_GET_MEDIA_SIZE_ARGUMENT_VALUE 1
/* Define to 1 if you have the <libewf.h> header file. */
#define HAVE_LIBEWF_H 1
#endif

/* The following lines added per AccessData */
#include <windows.h>
#undef USE_LIBEWF
#define DISABLE_QEMU
#define HAVE_ALLOCA 1
#define HAVE_ASSERT_H 1
#define HAVE_CSTRING 1
#define HAVE_CTYPE_H 1
#define HAVE_EVP_MD_SIZE 1
#define HAVE_EVP_READ_PW_STRING 1
#define HAVE_ERRNO_H 1
#define HAVE_FCNTL_H 1
#define HAVE_ISLNUM 1
#define HAVE_ISDIGIT 1
#define HAVE_MEMORY_H 1
#define HAVE_LIBSSL 1
#define HAVE_LIBZ 1
#define HAVE_MALLOC_H 1
#define HAVE_MD5 1
#define HAVE_MEMORY_H 1
#define HAVE_MEMSET 1
#define HAVE_MKDIR 1
#define HAVE_SHA1 1
#define HAVE_AES_ENCRYPT 1
#define HAVE_OPENSSL_AES_H 1
#define HAVE_OPENSSL_BIO_H 1
#define HAVE_OPENSSL_EVP_H 1
#define HAVE_OPENSSL_HMAC_H 1
#define HAVE_OPENSSL_MD5_H 1
#define HAVE_OPENSSL_PEM_H 1
#define HAVE_OPENSSL_RAND_H 1
#define HAVE_OPENSSL_RSA_H 1
#define HAVE_OPENSSL_SHA_H 1
#define HAVE_OPENSSL_X509_H 1
#define HAVE_PEM_READ_BIO_RSA_PUBKEY 1
#define HAVE_PUTENV 1
#define HAVE_RAND_PSEUDO_BYTES 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRCHR 1
#define HAVE_STRDUP 1
#define HAVE_STRERROR 1
#define HAVE_STRING_H 1
#define HAVE_STRRCHR 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_ZLIB_H 1
#define PACKAGE_VERSION "3.6.9"
typedef SSIZE_T ssize_t;
