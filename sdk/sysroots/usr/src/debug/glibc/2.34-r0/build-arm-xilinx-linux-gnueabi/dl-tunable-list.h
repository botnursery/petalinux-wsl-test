/* AUTOGENERATED by gen-tunables.awk.  */
#ifndef _TUNABLES_H_
# error "Do not include this file directly."
# error "Include tunables.h instead."
#endif
#include <dl-procinfo.h>


typedef enum
{
  TUNABLE_ENUM_NAME(glibc, rtld, nns),
  TUNABLE_ENUM_NAME(glibc, elision, skip_lock_after_retries),
  TUNABLE_ENUM_NAME(glibc, malloc, trim_threshold),
  TUNABLE_ENUM_NAME(glibc, malloc, perturb),
  TUNABLE_ENUM_NAME(glibc, mem, tagging),
  TUNABLE_ENUM_NAME(glibc, elision, tries),
  TUNABLE_ENUM_NAME(glibc, elision, enable),
  TUNABLE_ENUM_NAME(glibc, malloc, mxfast),
  TUNABLE_ENUM_NAME(glibc, elision, skip_lock_busy),
  TUNABLE_ENUM_NAME(glibc, malloc, top_pad),
  TUNABLE_ENUM_NAME(glibc, pthread, stack_cache_size),
  TUNABLE_ENUM_NAME(glibc, cpu, hwcap_mask),
  TUNABLE_ENUM_NAME(glibc, malloc, mmap_max),
  TUNABLE_ENUM_NAME(glibc, elision, skip_trylock_internal_abort),
  TUNABLE_ENUM_NAME(glibc, malloc, tcache_unsorted_limit),
  TUNABLE_ENUM_NAME(glibc, elision, skip_lock_internal_abort),
  TUNABLE_ENUM_NAME(glibc, malloc, arena_max),
  TUNABLE_ENUM_NAME(glibc, malloc, mmap_threshold),
  TUNABLE_ENUM_NAME(glibc, malloc, tcache_count),
  TUNABLE_ENUM_NAME(glibc, malloc, arena_test),
  TUNABLE_ENUM_NAME(glibc, pthread, mutex_spin_count),
  TUNABLE_ENUM_NAME(glibc, rtld, optional_static_tls),
  TUNABLE_ENUM_NAME(glibc, malloc, tcache_max),
  TUNABLE_ENUM_NAME(glibc, malloc, check),
} tunable_id_t;


#ifdef TUNABLES_INTERNAL
# define TUNABLE_NAME_MAX 42
# define TUNABLE_ALIAS_MAX 23
# include "dl-tunable-types.h"
static tunable_t tunable_list[] attribute_relro = {
  {TUNABLE_NAME_S(glibc, rtld, nns), {TUNABLE_TYPE_SIZE_T, 1, 16}, {.numval = 4}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, elision, skip_lock_after_retries), {TUNABLE_TYPE_INT_32, 0, INT32_MAX}, {.numval = 3}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, trim_threshold), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, "MALLOC_TRIM_THRESHOLD_"},
  {TUNABLE_NAME_S(glibc, malloc, perturb), {TUNABLE_TYPE_INT_32, 0, 0xff}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, "MALLOC_PERTURB_"},
  {TUNABLE_NAME_S(glibc, mem, tagging), {TUNABLE_TYPE_INT_32, 0, 255}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, {0}},
  {TUNABLE_NAME_S(glibc, elision, tries), {TUNABLE_TYPE_INT_32, 0, INT32_MAX}, {.numval = 3}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, elision, enable), {TUNABLE_TYPE_INT_32, 0, 1}, {}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, mxfast), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, {0}},
  {TUNABLE_NAME_S(glibc, elision, skip_lock_busy), {TUNABLE_TYPE_INT_32, 0, INT32_MAX}, {.numval = 3}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, top_pad), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, "MALLOC_TOP_PAD_"},
  {TUNABLE_NAME_S(glibc, pthread, stack_cache_size), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {.numval = 41943040}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, cpu, hwcap_mask), {TUNABLE_TYPE_UINT_64, 0, UINT64_MAX}, {.numval = HWCAP_IMPORTANT}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, "LD_HWCAP_MASK"},
  {TUNABLE_NAME_S(glibc, malloc, mmap_max), {TUNABLE_TYPE_INT_32, 0, INT32_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, "MALLOC_MMAP_MAX_"},
  {TUNABLE_NAME_S(glibc, elision, skip_trylock_internal_abort), {TUNABLE_TYPE_INT_32, 0, INT32_MAX}, {.numval = 3}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, tcache_unsorted_limit), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, elision, skip_lock_internal_abort), {TUNABLE_TYPE_INT_32, 0, INT32_MAX}, {.numval = 3}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, arena_max), {TUNABLE_TYPE_SIZE_T, 1, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, "MALLOC_ARENA_MAX"},
  {TUNABLE_NAME_S(glibc, malloc, mmap_threshold), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, "MALLOC_MMAP_THRESHOLD_"},
  {TUNABLE_NAME_S(glibc, malloc, tcache_count), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, arena_test), {TUNABLE_TYPE_SIZE_T, 1, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_IGNORE, "MALLOC_ARENA_TEST"},
  {TUNABLE_NAME_S(glibc, pthread, mutex_spin_count), {TUNABLE_TYPE_INT_32, 0, 32767}, {.numval = 100}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, rtld, optional_static_tls), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {.numval = 512}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, tcache_max), {TUNABLE_TYPE_SIZE_T, 0, SIZE_MAX}, {}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, {0}},
  {TUNABLE_NAME_S(glibc, malloc, check), {TUNABLE_TYPE_INT_32, 0, 3}, {}, NULL, TUNABLE_SECLEVEL_SXID_ERASE, "MALLOC_CHECK_"},
};
#endif
