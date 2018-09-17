//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

#ifndef translation_recognizer_private_h
#define translation_recognizer_private_h

#import "translation_recognizer.h"
#import "translation_synthesis_result_event_args_private.h"
#import "common_private.h"

@interface TranslationRecognizer (Private)

- (instancetype)init :(TranslationRecoSharedPtr)recoHandle;

- (void)onRecognizedEvent :(TranslationTextResultEventArgs *)eventArgs;
- (void)onRecognizingEvent :(TranslationTextResultEventArgs *)eventArgs;
- (void)onSynthesizingEvent :(TranslationSynthesisResultEventArgs *)eventArgs;
- (void)onCanceledEvent :(TranslationTextResultCanceledEventArgs *)eventArgs;

@end
#endif /* translation_recognizer_private_h */
