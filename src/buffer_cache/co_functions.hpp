#ifndef __BUFFER_CACHE_CO_FUNCTIONS_HPP__
#define __BUFFER_CACHE_CO_FUNCTIONS_HPP__

// TODO: Some of this stuff (all of it?) actually belongs in buffer_cache/.

#include "buffer_cache/buffer_cache.hpp"
#include "buffer_cache/large_buf.hpp"

buf_t *co_acquire_transaction(transaction_t *transaction, block_id_t block_id, access_t mode);
void co_acquire_large_value(large_buf_t *large_value, large_buf_ref root_ref_, access_t access_);




#endif  // __BUFFER_CACHE_CO_FUNCTIONS_HPP__
