/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 4.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_BC4899FDB6184DA2__
#define __JUCE_HEADER_BC4899FDB6184DA2__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GUIComponents  : public Component,
                       public ComboBoxListener,
                       public SliderListener,
                       public ButtonListener
{
public:
    //==============================================================================
    GUIComponents ();
    ~GUIComponents();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextEditor> portText;
    ScopedPointer<Label> labelCV1;
    ScopedPointer<ComboBox> ScaleSelect;
    ScopedPointer<Label> labelScale;
    ScopedPointer<Label> labelMOSC;
    ScopedPointer<Label> labelCV2;
    ScopedPointer<Slider> cvMeter2;
    ScopedPointer<Slider> cvMeter1;
    ScopedPointer<Label> labelCV3;
    ScopedPointer<Slider> cvMeter3;
    ScopedPointer<Label> labelCV4;
    ScopedPointer<Slider> cvMeter4;
    ScopedPointer<Label> labePort;
    ScopedPointer<TextButton> muteCV1;
    ScopedPointer<TextButton> muteCV2;
    ScopedPointer<TextButton> muteCV3;
    ScopedPointer<TextButton> muteCV4;
    ScopedPointer<ComboBox> Resolution;
    ScopedPointer<Label> labelResolution;
    Path internalPath1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GUIComponents)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_BC4899FDB6184DA2__
