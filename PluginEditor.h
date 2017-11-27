/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class WaylochilliAudioProcessorEditor  : public AudioProcessorEditor,
                                         private Label::Listener
{
public:
    WaylochilliAudioProcessorEditor (WaylochilliAudioProcessor&);
    ~WaylochilliAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void labelTextChanged (Label* label) override;
    
    


    

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    WaylochilliAudioProcessor& processor;
    Label titleLabel;
    Label offsetOneLabel;
    Label offsetOneText;
    String offsetOne;
    int offsetOnenum;
    Label offsetTwoLabel;
    Label offsetTwoText;
    String offsetTwo;
    int offsetTwonum;
    Label offsetThreeLabel;
    Label offsetThreeText;
    String offsetThree;
    int offsetThreenum;
    Label offsetFourLabel;
    Label offsetFourText;
    String offsetFour;
    int offsetFournum;
    Label offsetFiveLabel;
    Label offsetFiveText;
    String offsetFive;
    int offsetFivenum;
    Label offsetSixLabel;
    Label offsetSixText;
    String offsetSix;
    int offsetSixnum;
    Label offsetSevenLabel;
    Label offsetSevenText;
    String offsetSeven;
    int offsetSevennum;
    Label offsetEightLabel;
    Label offsetEightText;
    String offsetEight;
    int offsetEightnum;
    
    

    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WaylochilliAudioProcessorEditor)
};
