var exec = require('cordova/exec');

var TwilioVideo = function() {};

TwilioVideo.openRoom = function(token, room, eventCallback, config) {
    config = config != null ? config : null;
    exec(function(e) {
        console.log("Twilio video event fired: " + e);
        if (eventCallback) {
            eventCallback(e.event, e.data);
        }
    }, null, 'TwilioVideoPlugin', 'openRoom', [token, room, config]);
};

TwilioVideo.closeRoom = function() {
    return new Promise(function(resolve, reject) {
        exec(function() {
            resolve();
        }, function(error) {
            reject(error);
        }, "TwilioVideoPlugin", "closeRoom", []);
    });
};

TwilioVideo.displayIncomingCall = function(callUUID, eventCallback, config) {
    config = config != null ? config : null;
    exec(function(e) {
        console.log("Twilio video event fired: " + e);
        if (eventCallback) {
            eventCallback(e.event, e.data);
        }
    }, null, 'TwilioVideoPlugin', 'displayIncomingCall', [callUUID, config]);
};

TwilioVideo.bindDocumentEvent = function() {
    exec(function(e) {
      console.log("Firing document event: " + e.eventType + " with data " + JSON.stringify(e.eventData));
      cordova.fireDocumentEvent(e.eventType, e.eventData);
    }, null, "TwilioVideo", "registerListener", []);
};

document.addEventListener("deviceready", TwilioVideo.bindDocumentEvent, false);

module.exports = TwilioVideo;