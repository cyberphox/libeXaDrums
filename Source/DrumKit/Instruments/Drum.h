/*
 * Drum.h
 *
 *  Created on: 28 Oct 2015
 *      Author: jeremy
 */

#ifndef LIBEXADRUMS_SOURCE_DRUMKIT_DRUM_H_
#define LIBEXADRUMS_SOURCE_DRUMKIT_DRUM_H_

#include "../../Sound/SoundBank/SoundBank.h"
#include "../../Sound/SoundProcessor/SoundProcessor.h"

#include "../Triggers/Trigger.h"

#include "Instrument.h"

#include <functional>
#include <vector>
#include <string>
#include <memory>

namespace DrumKit
{

	class Drum : public Instrument
	{

	public:

		Drum(InstrumentParameters parameters, std::shared_ptr<Sound::SoundProcessor> soundProcessor, std::map<int, TriggerPtr> const& triggers);
		virtual ~Drum();

		virtual int GetSoundProps();

	private:

		virtual void GenerateSounds();

	};

}


#endif /* LIBEXADRUMS_SOURCE_DRUMKIT_DRUM_H_ */
