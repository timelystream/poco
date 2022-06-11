#ifndef BLAZAR_CONTRIB_POCO_FOUNDATION_INCLUDE_POCO_STRING_PREDICATE_HPP_
#define BLAZAR_CONTRIB_POCO_FOUNDATION_INCLUDE_POCO_STRING_PREDICATE_HPP_
#include <string>
namespace std {
template <typename charT>
inline bool starts_with(const basic_string<charT>& big, const basic_string<charT>& small) {
    if (&big == &small) return true;
    const typename basic_string<charT>::size_type big_size = big.size();
    const typename basic_string<charT>::size_type small_size = small.size();
    const bool valid_ = (big_size >= small_size);
    const bool starts_with_ = (big.compare(0, small_size, small) == 0);
    return valid_ and starts_with_;
}

template <typename charT>
inline bool ends_with(const basic_string<charT>& big, const basic_string<charT>& small) {
    if (&big == &small) return true;
    const typename basic_string<charT>::size_type big_size = big.size();
    const typename basic_string<charT>::size_type small_size = small.size();
    const bool valid_ = (big_size >= small_size);
    const bool ends_with_ = (big.compare(big_size - small_size, small_size, small) == 0);
    return valid_ and ends_with_;
}
}  // namespace std
#endif // BLAZAR_CONTRIB_POCO_FOUNDATION_INCLUDE_POCO_STRING_PREDICATE_HPP_
