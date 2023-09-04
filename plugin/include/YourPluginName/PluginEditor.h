#pragma once

#ifndef _JUCE_PLUGIN_EDITOR_H_
#define _JUCE_PLUGIN_EDITOR_H_

#include "PluginProcessor.h"

namespace audio_plugin {
  class AudioPluginAudioProcessorEditor : public juce::AudioProcessorEditor {
    public:
      explicit AudioPluginAudioProcessorEditor(AudioPluginAudioProcessor &);
      ~AudioPluginAudioProcessorEditor() override;

      void paint(juce::Graphics &) override;
      void resized() override;

    private:
      // This reference is provided as a quick way for your editor to
      // access the processor object that created it.
      AudioPluginAudioProcessor &processorRef;

      JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioPluginAudioProcessorEditor)
  };
} // namespace audio_plugin
#endif
