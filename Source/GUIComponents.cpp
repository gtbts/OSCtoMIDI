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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUIComponents.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUIComponents::GUIComponents ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (portText = new TextEditor ("port"));
    portText->setMultiLine (false);
    portText->setReturnKeyStartsNewLine (false);
    portText->setReadOnly (false);
    portText->setScrollbarsShown (true);
    portText->setCaretVisible (true);
    portText->setPopupMenuEnabled (true);
    portText->setText (TRANS("9000"));

    addAndMakeVisible (labelCV1 = new Label (String(),
                                             TRANS("CV1\n")));
    labelCV1->setFont (Font ("Futura", 14.00f, Font::plain));
    labelCV1->setJustificationType (Justification::centredLeft);
    labelCV1->setEditable (false, false, false);
    labelCV1->setColour (Label::textColourId, Colour (0xff363636));
    labelCV1->setColour (TextEditor::textColourId, Colours::black);
    labelCV1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ScaleSelect = new ComboBox ("scale"));
    ScaleSelect->setEditableText (false);
    ScaleSelect->setJustificationType (Justification::centred);
    ScaleSelect->setTextWhenNothingSelected (TRANS("Chromatic"));
    ScaleSelect->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    ScaleSelect->addItem (TRANS("Chromatic"), 1);
    ScaleSelect->addItem (TRANS("Major"), 2);
    ScaleSelect->addItem (TRANS("M7"), 3);
    ScaleSelect->addItem (TRANS("Min7"), 4);
    ScaleSelect->addItem (TRANS("Dorian"), 5);
    ScaleSelect->addItem (TRANS("Minor"), 6);
    ScaleSelect->addItem (TRANS("5th"), 7);
    ScaleSelect->addItem (TRANS("Whole"), 8);
    ScaleSelect->addListener (this);

    addAndMakeVisible (labelScale = new Label (String(),
                                               TRANS("Scale\n")));
    labelScale->setFont (Font ("Futura", 14.00f, Font::plain));
    labelScale->setJustificationType (Justification::centredLeft);
    labelScale->setEditable (false, false, false);
    labelScale->setColour (Label::textColourId, Colour (0xff363636));
    labelScale->setColour (TextEditor::textColourId, Colours::black);
    labelScale->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelMOSC = new Label (String(),
                                              TRANS("OSC to MIDI")));
    labelMOSC->setFont (Font ("Futura", 17.10f, Font::bold));
    labelMOSC->setJustificationType (Justification::centredLeft);
    labelMOSC->setEditable (false, false, false);
    labelMOSC->setColour (Label::textColourId, Colours::white);
    labelMOSC->setColour (TextEditor::textColourId, Colours::black);
    labelMOSC->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelCV2 = new Label (String(),
                                             TRANS("CV2")));
    labelCV2->setFont (Font ("Futura", 14.00f, Font::plain));
    labelCV2->setJustificationType (Justification::centredLeft);
    labelCV2->setEditable (false, false, false);
    labelCV2->setColour (Label::textColourId, Colour (0xff363636));
    labelCV2->setColour (TextEditor::textColourId, Colours::black);
    labelCV2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cvMeter2 = new Slider ("CVMeter2"));
    cvMeter2->setRange (0, 4095, 1);
    cvMeter2->setSliderStyle (Slider::LinearBar);
    cvMeter2->setTextBoxStyle (Slider::NoTextBox, false, 30, 14);
    cvMeter2->setColour (Slider::backgroundColourId, Colour (0xf1e8e8e8));
    cvMeter2->setColour (Slider::thumbColourId, Colour (0xff00cc88));
    cvMeter2->setColour (Slider::trackColourId, Colours::white);
    cvMeter2->setColour (Slider::rotarySliderFillColourId, Colour (0xff00cc88));
    cvMeter2->addListener (this);

    addAndMakeVisible (cvMeter1 = new Slider ("CVMeter1"));
    cvMeter1->setRange (0, 4095, 1);
    cvMeter1->setSliderStyle (Slider::LinearBar);
    cvMeter1->setTextBoxStyle (Slider::NoTextBox, false, 30, 14);
    cvMeter1->setColour (Slider::backgroundColourId, Colour (0xf1e8e8e8));
    cvMeter1->setColour (Slider::thumbColourId, Colour (0xff00cc88));
    cvMeter1->setColour (Slider::trackColourId, Colours::white);
    cvMeter1->setColour (Slider::rotarySliderFillColourId, Colour (0xff00cc88));
    cvMeter1->addListener (this);

    addAndMakeVisible (labelCV3 = new Label (String(),
                                             TRANS("CV3\n")));
    labelCV3->setFont (Font ("Futura", 14.00f, Font::plain));
    labelCV3->setJustificationType (Justification::centredLeft);
    labelCV3->setEditable (false, false, false);
    labelCV3->setColour (Label::textColourId, Colour (0xff363636));
    labelCV3->setColour (TextEditor::textColourId, Colours::black);
    labelCV3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cvMeter3 = new Slider ("CVMeter3"));
    cvMeter3->setRange (0, 4095, 1);
    cvMeter3->setSliderStyle (Slider::LinearBar);
    cvMeter3->setTextBoxStyle (Slider::NoTextBox, false, 30, 14);
    cvMeter3->setColour (Slider::backgroundColourId, Colour (0xf1e8e8e8));
    cvMeter3->setColour (Slider::thumbColourId, Colour (0xff00cc88));
    cvMeter3->setColour (Slider::trackColourId, Colours::white);
    cvMeter3->setColour (Slider::rotarySliderFillColourId, Colour (0xff00cc88));
    cvMeter3->addListener (this);

    addAndMakeVisible (labelCV4 = new Label (String(),
                                             TRANS("CV4")));
    labelCV4->setFont (Font ("Futura", 14.00f, Font::plain));
    labelCV4->setJustificationType (Justification::centredLeft);
    labelCV4->setEditable (false, false, false);
    labelCV4->setColour (Label::textColourId, Colour (0xff363636));
    labelCV4->setColour (TextEditor::textColourId, Colours::black);
    labelCV4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cvMeter4 = new Slider ("CVMeter4"));
    cvMeter4->setRange (0, 4095, 1);
    cvMeter4->setSliderStyle (Slider::LinearBar);
    cvMeter4->setTextBoxStyle (Slider::NoTextBox, false, 30, 14);
    cvMeter4->setColour (Slider::backgroundColourId, Colour (0xf1e8e8e8));
    cvMeter4->setColour (Slider::thumbColourId, Colour (0xff00cc88));
    cvMeter4->setColour (Slider::trackColourId, Colours::white);
    cvMeter4->setColour (Slider::rotarySliderFillColourId, Colour (0xff00cc88));
    cvMeter4->addListener (this);

    addAndMakeVisible (labePort = new Label (String(),
                                             TRANS("Port\n"
                                             "\n")));
    labePort->setFont (Font ("Futura", 14.00f, Font::plain));
    labePort->setJustificationType (Justification::centredLeft);
    labePort->setEditable (false, false, false);
    labePort->setColour (Label::textColourId, Colour (0xff363636));
    labePort->setColour (TextEditor::textColourId, Colours::black);
    labePort->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (muteCV1 = new TextButton ("MuteCV2"));
    muteCV1->setButtonText (String());
    muteCV1->addListener (this);
    muteCV1->setColour (TextButton::buttonColourId, Colour (0xffaea8a8));
    muteCV1->setColour (TextButton::buttonOnColourId, Colour (0xff00cc88));

    addAndMakeVisible (muteCV2 = new TextButton ("MuteCV2"));
    muteCV2->setButtonText (String());
    muteCV2->addListener (this);
    muteCV2->setColour (TextButton::buttonColourId, Colour (0xffaea8a8));
    muteCV2->setColour (TextButton::buttonOnColourId, Colour (0xff00cc88));

    addAndMakeVisible (muteCV3 = new TextButton ("MuteCV3"));
    muteCV3->setButtonText (String());
    muteCV3->addListener (this);
    muteCV3->setColour (TextButton::buttonColourId, Colour (0xffaea8a8));
    muteCV3->setColour (TextButton::buttonOnColourId, Colour (0xff00cc88));

    addAndMakeVisible (muteCV4 = new TextButton ("MuteCV3"));
    muteCV4->setButtonText (String());
    muteCV4->addListener (this);
    muteCV4->setColour (TextButton::buttonColourId, Colour (0xffaea8a8));
    muteCV4->setColour (TextButton::buttonOnColourId, Colour (0xff00cc88));

    addAndMakeVisible (Resolution = new ComboBox ("resolution"));
    Resolution->setEditableText (false);
    Resolution->setJustificationType (Justification::centred);
    Resolution->setTextWhenNothingSelected (TRANS("12bit"));
    Resolution->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    Resolution->addItem (TRANS("8bit"), 1);
    Resolution->addItem (TRANS("12bit"), 2);
    Resolution->addItem (TRANS("16bit"), 3);
    Resolution->addListener (this);

    addAndMakeVisible (labelResolution = new Label (String(),
                                                    TRANS("Resolution")));
    labelResolution->setFont (Font ("Futura", 14.00f, Font::plain));
    labelResolution->setJustificationType (Justification::centredLeft);
    labelResolution->setEditable (false, false, false);
    labelResolution->setColour (Label::textColourId, Colour (0xff363636));
    labelResolution->setColour (TextEditor::textColourId, Colours::black);
    labelResolution->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUIComponents::~GUIComponents()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    portText = nullptr;
    labelCV1 = nullptr;
    ScaleSelect = nullptr;
    labelScale = nullptr;
    labelMOSC = nullptr;
    labelCV2 = nullptr;
    cvMeter2 = nullptr;
    cvMeter1 = nullptr;
    labelCV3 = nullptr;
    cvMeter3 = nullptr;
    labelCV4 = nullptr;
    cvMeter4 = nullptr;
    labePort = nullptr;
    muteCV1 = nullptr;
    muteCV2 = nullptr;
    muteCV3 = nullptr;
    muteCV4 = nullptr;
    Resolution = nullptr;
    labelResolution = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUIComponents::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff878686));

    g.setColour (Colour (0xf5f2f1f1));
    g.fillRoundedRectangle (4.0f, 4.0f, 252.0f, 188.0f, 4.500f);

    g.setColour (Colour (0xffaea8a8));
    g.fillPath (internalPath1);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUIComponents::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    portText->setBounds (43, 168, 82, 20);
    labelCV1->setBounds (5, 38, 40, 20);
    ScaleSelect->setBounds (43, 141, 204, 19);
    labelScale->setBounds (8, 140, 41, 20);
    labelMOSC->setBounds (3, 6, 150, 24);
    labelCV2->setBounds (5, 63, 40, 20);
    cvMeter2->setBounds (56, 65, 191, 16);
    cvMeter1->setBounds (56, 40, 191, 16);
    labelCV3->setBounds (5, 88, 40, 20);
    cvMeter3->setBounds (56, 90, 191, 16);
    labelCV4->setBounds (5, 113, 40, 20);
    cvMeter4->setBounds (56, 115, 191, 16);
    labePort->setBounds (14, 168, 41, 20);
    muteCV1->setBounds (37, 42, 12, 12);
    muteCV2->setBounds (37, 67, 12, 12);
    muteCV3->setBounds (37, 92, 12, 12);
    muteCV4->setBounds (37, 115, 12, 12);
    Resolution->setBounds (188, 168, 59, 19);
    labelResolution->setBounds (128, 166, 64, 23);
    internalPath1.clear();
    internalPath1.startNewSubPath (4.0f, 9.0f);
    internalPath1.cubicTo (4.0f, 6.0f, 6.0f, 4.0f, 8.0f, 4.0f);
    internalPath1.lineTo (252.0f, 4.0f);
    internalPath1.cubicTo (254.0f, 4.0f, 256.0f, 6.0f, 256.0f, 9.0f);
    internalPath1.lineTo (256.0f, 32.0f);
    internalPath1.lineTo (4.0f, 32.0f);
    internalPath1.closeSubPath();

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GUIComponents::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == ScaleSelect)
    {
        //[UserComboBoxCode_ScaleSelect] -- add your combo box handling code here..
        //[/UserComboBoxCode_ScaleSelect]
    }
    else if (comboBoxThatHasChanged == Resolution)
    {
        //[UserComboBoxCode_Resolution] -- add your combo box handling code here..
        //[/UserComboBoxCode_Resolution]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void GUIComponents::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == cvMeter2)
    {
        //[UserSliderCode_cvMeter2] -- add your slider handling code here..
        //[/UserSliderCode_cvMeter2]
    }
    else if (sliderThatWasMoved == cvMeter1)
    {
        //[UserSliderCode_cvMeter1] -- add your slider handling code here..
        //[/UserSliderCode_cvMeter1]
    }
    else if (sliderThatWasMoved == cvMeter3)
    {
        //[UserSliderCode_cvMeter3] -- add your slider handling code here..
        //[/UserSliderCode_cvMeter3]
    }
    else if (sliderThatWasMoved == cvMeter4)
    {
        //[UserSliderCode_cvMeter4] -- add your slider handling code here..
        //[/UserSliderCode_cvMeter4]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void GUIComponents::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == muteCV1)
    {
        //[UserButtonCode_muteCV1] -- add your button handler code here..
        //[/UserButtonCode_muteCV1]
    }
    else if (buttonThatWasClicked == muteCV2)
    {
        //[UserButtonCode_muteCV2] -- add your button handler code here..
        //[/UserButtonCode_muteCV2]
    }
    else if (buttonThatWasClicked == muteCV3)
    {
        //[UserButtonCode_muteCV3] -- add your button handler code here..
        //[/UserButtonCode_muteCV3]
    }
    else if (buttonThatWasClicked == muteCV4)
    {
        //[UserButtonCode_muteCV4] -- add your button handler code here..
        //[/UserButtonCode_muteCV4]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUIComponents" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff878686">
    <ROUNDRECT pos="4 4 252 188" cornerSize="4.5" fill="solid: f5f2f1f1" hasStroke="0"/>
    <PATH pos="0 0 100 100" fill="solid: ffaea8a8" hasStroke="0" nonZeroWinding="1">s 4 9.25 c 4 6.37 6.02 4  8.5 4 l 251.5 4 c 253.98 4 256 6.37  256 9.25 l 256 32 l 4 32 x</PATH>
  </BACKGROUND>
  <TEXTEDITOR name="port" id="d68185094e55f4a8" memberName="portText" virtualName=""
              explicitFocusOrder="0" pos="43 168 82 20" initialText="9000"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="" id="e79c4111330a32e4" memberName="labelCV1" virtualName=""
         explicitFocusOrder="0" pos="5 38 40 20" textCol="ff363636" edTextCol="ff000000"
         edBkgCol="0" labelText="CV1&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Futura" fontsize="14" bold="0"
         italic="0" justification="33"/>
  <COMBOBOX name="scale" id="83509f079d45f498" memberName="ScaleSelect" virtualName=""
            explicitFocusOrder="0" pos="43 141 204 19" editable="0" layout="36"
            items="Chromatic&#10;Major&#10;M7&#10;Min7&#10;Dorian&#10;Minor&#10;5th&#10;Whole"
            textWhenNonSelected="Chromatic" textWhenNoItems="(no choices)"/>
  <LABEL name="" id="e04a1276c4f86ed8" memberName="labelScale" virtualName=""
         explicitFocusOrder="0" pos="8 140 41 20" textCol="ff363636" edTextCol="ff000000"
         edBkgCol="0" labelText="Scale&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Futura" fontsize="14" bold="0"
         italic="0" justification="33"/>
  <LABEL name="" id="d1a51ada5e4517ca" memberName="labelMOSC" virtualName=""
         explicitFocusOrder="0" pos="3 6 150 24" textCol="ffffffff" edTextCol="ff000000"
         edBkgCol="0" labelText="OSC to MIDI" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Futura"
         fontsize="17.100000000000001421" bold="1" italic="0" justification="33"/>
  <LABEL name="" id="4e81634ad8c06055" memberName="labelCV2" virtualName=""
         explicitFocusOrder="0" pos="5 63 40 20" textCol="ff363636" edTextCol="ff000000"
         edBkgCol="0" labelText="CV2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Futura" fontsize="14" bold="0"
         italic="0" justification="33"/>
  <SLIDER name="CVMeter2" id="bad23b6d75d9ca53" memberName="cvMeter2" virtualName=""
          explicitFocusOrder="0" pos="56 65 191 16" bkgcol="f1e8e8e8" thumbcol="ff00cc88"
          trackcol="ffffffff" rotarysliderfill="ff00cc88" min="0" max="4095"
          int="1" style="LinearBar" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="30" textBoxHeight="14" skewFactor="1"/>
  <SLIDER name="CVMeter1" id="4e186ea6a4c4e631" memberName="cvMeter1" virtualName=""
          explicitFocusOrder="0" pos="56 40 191 16" bkgcol="f1e8e8e8" thumbcol="ff00cc88"
          trackcol="ffffffff" rotarysliderfill="ff00cc88" min="0" max="4095"
          int="1" style="LinearBar" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="30" textBoxHeight="14" skewFactor="1"/>
  <LABEL name="" id="66e31e9c49eb30d9" memberName="labelCV3" virtualName=""
         explicitFocusOrder="0" pos="5 88 40 20" textCol="ff363636" edTextCol="ff000000"
         edBkgCol="0" labelText="CV3&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Futura" fontsize="14" bold="0"
         italic="0" justification="33"/>
  <SLIDER name="CVMeter3" id="adb3adc150f2d8a8" memberName="cvMeter3" virtualName=""
          explicitFocusOrder="0" pos="56 90 191 16" bkgcol="f1e8e8e8" thumbcol="ff00cc88"
          trackcol="ffffffff" rotarysliderfill="ff00cc88" min="0" max="4095"
          int="1" style="LinearBar" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="30" textBoxHeight="14" skewFactor="1"/>
  <LABEL name="" id="fcff85f2fdbe57c" memberName="labelCV4" virtualName=""
         explicitFocusOrder="0" pos="5 113 40 20" textCol="ff363636" edTextCol="ff000000"
         edBkgCol="0" labelText="CV4" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Futura" fontsize="14" bold="0"
         italic="0" justification="33"/>
  <SLIDER name="CVMeter4" id="7e8c51cb84a36d75" memberName="cvMeter4" virtualName=""
          explicitFocusOrder="0" pos="56 115 191 16" bkgcol="f1e8e8e8"
          thumbcol="ff00cc88" trackcol="ffffffff" rotarysliderfill="ff00cc88"
          min="0" max="4095" int="1" style="LinearBar" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="30" textBoxHeight="14" skewFactor="1"/>
  <LABEL name="" id="eeec341ebbffb0b3" memberName="labePort" virtualName=""
         explicitFocusOrder="0" pos="14 168 41 20" textCol="ff363636"
         edTextCol="ff000000" edBkgCol="0" labelText="Port&#10;&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Futura" fontsize="14" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="MuteCV2" id="23976ef0310fdcb4" memberName="muteCV1" virtualName=""
              explicitFocusOrder="0" pos="37 42 12 12" bgColOff="ffaea8a8"
              bgColOn="ff00cc88" buttonText="" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="MuteCV2" id="4a8654e6a4157128" memberName="muteCV2" virtualName=""
              explicitFocusOrder="0" pos="37 67 12 12" bgColOff="ffaea8a8"
              bgColOn="ff00cc88" buttonText="" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="MuteCV3" id="44c30d3646bc89a2" memberName="muteCV3" virtualName=""
              explicitFocusOrder="0" pos="37 92 12 12" bgColOff="ffaea8a8"
              bgColOn="ff00cc88" buttonText="" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="MuteCV3" id="46687748aed7a5a6" memberName="muteCV4" virtualName=""
              explicitFocusOrder="0" pos="37 115 12 12" bgColOff="ffaea8a8"
              bgColOn="ff00cc88" buttonText="" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <COMBOBOX name="resolution" id="d5641cf890a61607" memberName="Resolution"
            virtualName="" explicitFocusOrder="0" pos="188 168 59 19" editable="0"
            layout="36" items="8bit&#10;12bit&#10;16bit" textWhenNonSelected="12bit"
            textWhenNoItems="(no choices)"/>
  <LABEL name="" id="91797728342d8639" memberName="labelResolution" virtualName=""
         explicitFocusOrder="0" pos="128 166 64 23" textCol="ff363636"
         edTextCol="ff000000" edBkgCol="0" labelText="Resolution" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Futura"
         fontsize="14" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
