/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
WaylochilliAudioProcessorEditor::WaylochilliAudioProcessorEditor (WaylochilliAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    addAndMakeVisible (titleLabel);
    titleLabel.setFont (Font (16.0f, Font::bold));
    titleLabel.setText ("Waylo midi repeat melody", dontSendNotification);
    titleLabel.setColour (Label::textColourId, Colours::lightgreen);
    titleLabel.setJustificationType (Justification::centred);
    
    addAndMakeVisible (offsetOneLabel);
    offsetOneLabel.setText ("Offset One:", dontSendNotification);
    offsetOneLabel.attachToComponent (&offsetOneText, true);
    offsetOneLabel.setColour (Label::textColourId, Colours::orange);
    offsetOneLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetOneText);
    offsetOneText.setEditable (true);
    offsetOneText.setColour (Label::backgroundColourId, Colours::white);
    offsetOneText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetOneText.setColour (Label::textColourId, Colours::black);
    offsetOneText.addListener (this);
    
    addAndMakeVisible (offsetTwoLabel);
    offsetTwoLabel.setText ("Offset Two:", dontSendNotification);
    offsetTwoLabel.attachToComponent (&offsetTwoText, true);
    offsetTwoLabel.setColour (Label::textColourId, Colours::orange);
    offsetTwoLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetTwoText);
    offsetTwoText.setEditable (true);
    offsetTwoText.setColour (Label::backgroundColourId, Colours::white);
    offsetTwoText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetTwoText.setColour (Label::textColourId, Colours::black);
    offsetTwoText.addListener (this);
    
    addAndMakeVisible (offsetThreeLabel);
    offsetThreeLabel.setText ("Offset Three:", dontSendNotification);
    offsetThreeLabel.attachToComponent (&offsetThreeText, true);
    offsetThreeLabel.setColour (Label::textColourId, Colours::orange);
    offsetThreeLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetThreeText);
    offsetThreeText.setEditable (true);
    offsetThreeText.setColour (Label::backgroundColourId, Colours::white);
    offsetThreeText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetThreeText.setColour (Label::textColourId, Colours::black);
    offsetThreeText.addListener (this);
    
    
    addAndMakeVisible (offsetFourLabel);
    offsetFourLabel.setText ("Offset Four:", dontSendNotification);
    offsetFourLabel.attachToComponent (&offsetFourText, true);
    offsetFourLabel.setColour (Label::textColourId, Colours::orange);
    offsetFourLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetFourText);
    offsetFourText.setEditable (true);
    offsetFourText.setColour (Label::backgroundColourId, Colours::white);
    offsetFourText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetFourText.setColour (Label::textColourId, Colours::black);
    offsetFourText.addListener (this);

    
    addAndMakeVisible (offsetFiveLabel);
    offsetFiveLabel.setText ("Offset Five:", dontSendNotification);
    offsetFiveLabel.attachToComponent (&offsetFiveText, true);
    offsetFiveLabel.setColour (Label::textColourId, Colours::orange);
    offsetFiveLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetFiveText);
    offsetFiveText.setEditable (true);
    offsetFiveText.setColour (Label::backgroundColourId, Colours::white);
    offsetFiveText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetFiveText.setColour (Label::textColourId, Colours::black);
    offsetFiveText.addListener (this);
    
    addAndMakeVisible (offsetSixLabel);
    offsetSixLabel.setText ("Offset Six:", dontSendNotification);
    offsetSixLabel.attachToComponent (&offsetSixText, true);
    offsetSixLabel.setColour (Label::textColourId, Colours::orange);
    offsetSixLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetSixText);
    offsetSixText.setEditable (true);
    offsetSixText.setColour (Label::backgroundColourId, Colours::white);
    offsetSixText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetSixText.setColour (Label::textColourId, Colours::black);
    offsetSixText.addListener (this);
    
    addAndMakeVisible (offsetSevenLabel);
    offsetSevenLabel.setText ("Offset Seven:", dontSendNotification);
    offsetSevenLabel.attachToComponent (&offsetSevenText, true);
    offsetSevenLabel.setColour (Label::textColourId, Colours::orange);
    offsetSevenLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetSevenText);
    offsetSevenText.setEditable (true);
    offsetSevenText.setColour (Label::backgroundColourId, Colours::white);
    offsetSevenText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetSevenText.setColour (Label::textColourId, Colours::black);
    offsetSevenText.addListener (this);
    
    addAndMakeVisible (offsetEightLabel);
    offsetEightLabel.setText ("Offset Eight:", dontSendNotification);
    offsetEightLabel.attachToComponent (&offsetEightText, true);
    offsetEightLabel.setColour (Label::textColourId, Colours::orange);
    offsetEightLabel.setJustificationType (Justification::left);
    
    addAndMakeVisible (offsetEightText);
    offsetEightText.setEditable (true);
    offsetEightText.setColour (Label::backgroundColourId, Colours::white);
    offsetEightText.setColour (Label::textWhenEditingColourId, Colours::black);
    offsetEightText.setColour (Label::textColourId, Colours::black);
    offsetEightText.addListener (this);
    
    setSize (200, 500);
}


WaylochilliAudioProcessorEditor::~WaylochilliAudioProcessorEditor()
{
}

//==============================================================================
void WaylochilliAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Waylo Midi Repeat Melody", getLocalBounds(), Justification::centred, 1);
}

void WaylochilliAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    titleLabel.setBounds(10, 1, getWidth() - 20, 30);
    offsetOneText.setBounds (100, 50, getWidth() - 110, 20);
    offsetTwoText.setBounds (100, 80, getWidth() - 110, 20);
    offsetThreeText.setBounds (100, 110, getWidth() - 110, 20);
    offsetFourText.setBounds (100, 140, getWidth() - 110, 20);
    offsetFiveText.setBounds (100, 170, getWidth() - 110, 20);
    offsetSixText.setBounds (100, 200, getWidth() - 110, 20);
    offsetSevenText.setBounds (100, 230, getWidth() - 110, 20);
    offsetEightText.setBounds (100, 260, getWidth() - 110, 20);
}

void WaylochilliAudioProcessorEditor::labelTextChanged (Label* label)
{
    if (label == &offsetOneText)
        offsetOne = ( offsetOneText.getText());
        offsetOnenum = offsetOne.getIntValue();
        processor.offset[0] = offsetOnenum;
    if (label == &offsetTwoText)
        offsetTwo= ( offsetTwoText.getText());
        offsetTwonum = offsetTwo.getIntValue();
        processor.offset[1] = offsetTwonum;
    if (label == &offsetThreeText)
        offsetThree = ( offsetThreeText.getText());
        offsetThreenum= offsetThree.getIntValue();
        processor.offset[2] = offsetThreenum;
    if (label == &offsetFourText)
        offsetFour= ( offsetFourText.getText());
        offsetFournum = offsetFour.getIntValue();
        processor.offset[3] = offsetFournum;
    if (label == &offsetFiveText)
        offsetFive = ( offsetFiveText.getText());
        offsetFivenum = offsetFive.getIntValue();
        processor.offset[4] = offsetFivenum;
    if (label == &offsetSixText)
        offsetSix= ( offsetSixText.getText());
        offsetSixnum = offsetSix.getIntValue();
        processor.offset[5] = offsetSixnum;
    if (label == &offsetFiveText)
        offsetSeven = ( offsetSevenText.getText());
        offsetSevennum = offsetSeven.getIntValue();
        processor.offset[6] = offsetSevennum;
    if (label == &offsetEightText)
        offsetEight= ( offsetEightText.getText());
        offsetEightnum = offsetEight.getIntValue();
        processor.offset[7] = offsetEightnum;
}




