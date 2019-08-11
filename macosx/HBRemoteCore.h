/*  This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Foundation/Foundation.h>
#import "HBRedirect.h"

@import HandBrakeKit;

NS_ASSUME_NONNULL_BEGIN

@interface HBRemoteCore : NSObject

- (instancetype)initWithLogLevel:(NSInteger)level name:(NSString *)name;

@property (nonatomic, readonly) HBState state;

@property (nonatomic, readonly) HBRedirect *stdoutRedirect;
@property (nonatomic, readonly) HBRedirect *stderrRedirect;

@property (nonatomic, readwrite) BOOL automaticallyPreventSleep;

- (void)preventSleep;
- (void)allowSleep;

- (void)scanURL:(NSURL *)url titleIndex:(NSUInteger)index previews:(NSUInteger)previewsNum minDuration:(NSUInteger)seconds progressHandler:(HBCoreProgressHandler)progressHandler completionHandler:(HBCoreCompletionHandler)completionHandler;

- (void)cancelScan;

- (void)encodeJob:(HBJob *)job progressHandler:(HBCoreProgressHandler)progressHandler completionHandler:(HBCoreCompletionHandler)completionHandler;

- (void)cancelEncode;

- (void)pause;

- (void)resume;

@end

NS_ASSUME_NONNULL_END
