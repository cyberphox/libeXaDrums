/*
 * SoundBank.h
 *
 *  Created on: 14 Feb 2016
 *      Author: jeremy
 */

#ifndef SOURCE_SOUND_SOUNDBANK_SOUNDBANK_H_
#define SOURCE_SOUND_SOUNDBANK_SOUNDBANK_H_

#include "../Sound.h"

#include <string>
#include <vector>
#include <fstream>

namespace Sound
{

	class SoundBank
	{

	public:

		SoundBank(std::string dataFolder);
		virtual ~SoundBank();

		int LoadSound(std::string filename);
		Sound GetSound(int id) const { return sounds[id]; }


	private:

		std::string soundBankFolder;
		std::vector<Sound> sounds;


	};

} /* namespace Sound */

#endif /* SOURCE_SOUND_SOUNDBANK_SOUNDBANK_H_ */
