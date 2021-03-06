//
//  OEBackgroundColorView.h
//  OETheme
//
//  Created by Christoph Leimbrock on 13.10.12.
//  Copyright (c) 2012 OpenEmu. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "OEControl.h"

@interface OEBackgroundColorView : NSView <OEControl>
@property (copy, nonatomic) NSColor *backgroundColor;
@end
