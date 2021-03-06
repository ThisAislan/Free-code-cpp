#ifndef SUPPORT_H
#define SUPPORT_H

namespace support {

	class System {
	public:
		static void pause();
		static void pauseAndClear();
		static void ignoreCinMax();
		static void clear();
		static void sleep(unsigned int timeInMilliseconds);
	};

}

#endif // !SUPPORT_H