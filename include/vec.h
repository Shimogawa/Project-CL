#ifndef PROJECT_CL_VEC_H
#define PROJECT_CL_VEC_H

#ifndef PROJECT_CL_BUILD_VEC
#   error PROJECT_CL_BUILD_VEC not defined
#endif

#include <defs.h>

struct st_cc_vec;

typedef struct st_cc_vec cc_vec;

cc_vec *cc_vec_init(cc_size item_size);

cc_vec *cc_vec_init2(cc_size item_size, cc_size init_cap);

void cc_vec_destroy(cc_vec *vec);

cc_size cc_vec_size(cc_vec *vec);

cc_size cc_vec_cap(cc_vec *vec);

void cc_vec_shrink(cc_vec *vec);

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* PROJECT_CL_VEC_H */