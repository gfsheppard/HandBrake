/*  This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Foundation/Foundation.h>
#import "HBRemoteCoreProtocol.h"

@interface HandBrakeXPCService : NSObject <HBRemoteCoreProtocol>

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithConnection:(NSXPCConnection *)connection;

@end
