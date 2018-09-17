//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

#import "session_event_args_private.h"

@implementation SessionEventArgs

- (instancetype)init: (const SpeechImpl::SessionEventArgs&) eventArgsHandle
{
    self = [super init];
    _sessionId = [NSString stringWithString:eventArgsHandle.SessionId];
    return self;
}

@end

