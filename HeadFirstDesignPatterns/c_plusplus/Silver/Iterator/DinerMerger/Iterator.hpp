#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_ITERATOR_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMerger {

template <class T>
class Iterator {

	public: virtual ~Iterator() = 0 {
	}
	public: virtual bool hasNext() const = 0;
	public: virtual T* next() const = 0;
};

} // namespace DinerMerger
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif