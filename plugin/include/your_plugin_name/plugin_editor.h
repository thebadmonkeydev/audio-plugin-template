#pragma once

#ifndef _JUCE_PLUGIN_EDITOR_H_
#define _JUCE_PLUGIN_EDITOR_H_

#include <juce_audio_processors/juce_audio_processors.h>
#include "plugin_processor.h"

namespace your_plugin_name {
  class AudioProcessorEditor : public juce::AudioProcessorEditor {
    public:
      explicit AudioProcessorEditor(AudioProcessor &);
      ~AudioProcessorEditor() override;

      void paint(juce::Graphics &) override;
      void resized() override;

    private:
      // This reference is provided as a quick way for your editor to
      // access the processor object that created it.
      AudioProcessor &processorRef;

      JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioProcessorEditor)
  };
} // namespace audio_plugin
#endif
