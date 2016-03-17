/*
 * eXaDrumsApi.h
 *
 *  Created on: 8 Sep 2015
 *      Author: jeremy
 */

#ifndef LIBEXADRUMS_SOURCE_API_EXADRUMKIT_H_
#define LIBEXADRUMS_SOURCE_API_EXADRUMKIT_H_

#include "../IO/SensorType.h"
#include "../Sound/Alsa/Alsa.h"
#include "../Sound/Alsa/AlsaParameters.h"
#include "../Sound/Mixer.h"
#include "../DrumKit/DrumModule/Module.h"
#include "../DrumKit/KitManager/KitManager.h"

#include <string>
#include <vector>
#include <memory>

namespace eXaDrumsApi
{

	class eXaDrums
	{

	public:

		//eXaDrumKit();
		eXaDrums(const char* dataLocation, IO::SensorType sensorType);
		~eXaDrums();

		void LoadKit(const char* kitLocation);

		//
		void Start();
		void Stop();

	private:


		std::unique_ptr<DrumKit::Module> drumModule;

		Sound::AlsaParams alsaParams;
		std::unique_ptr<Sound::Alsa> alsa;
		std::shared_ptr<Sound::Mixer> mixer;


	};


}

#endif /* LIBEXADRUMS_SOURCE_API_EXADRUMKIT_H_ */
