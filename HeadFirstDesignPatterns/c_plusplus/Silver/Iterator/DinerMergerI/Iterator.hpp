#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_ITERATOR_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMergerI {

template <class T>
class Iterator {
	public: virtual bool hasNext() const = 0;
	public: virtual T* next() const = 0;
	public: virtual ~Iterator() = 0 {
	}
};

} // namespace DinerMergerI
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif