#ifndef	_HFDP_CPP_BUILDER_EVENT_COMPONENT_HPP_
#define _HFDP_CPP_BUILDER_EVENT_COMPONENT_HPP_

namespace HeadFirstDesignPatterns {
namespace Builder {

class EventComponent {

	private: EventComponent( const EventComponent& ); // Disable copy constructor
	private: void operator=( const EventComponent& ); // Disable assignment operator

	public: EventComponent() {
	}
	public: virtual ~EventComponent() = 0 {
	}
	public: virtual EventComponent* add( EventComponent* event ) {
		throw new UnsupportedOperationException();
	}
	public: virtual void remove( EventComponent* event ) {
		throw new UnsupportedOperationException();
	}
	public: virtual const EventComponent* getChild( int i ) const {
		throw new UnsupportedOperationException();
	}
	public: virtual std::string getName() const {
		throw new UnsupportedOperationException();
	}
	public: virtual std::string getDescription() const {
		throw new UnsupportedOperationException();
	}
	public: virtual double getPrice() const {
		throw new UnsupportedOperationException();
	}
	public: virtual void print() const {
		throw new UnsupportedOperationException();
	}
};

} // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
