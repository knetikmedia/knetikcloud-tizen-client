/*
 * SamiBroadcastableEvent.h
 * 
 * 
 */

#ifndef SamiBroadcastableEvent_H_
#define SamiBroadcastableEvent_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::Boolean;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiBroadcastableEvent: public SamiObject {
public:
    SamiBroadcastableEvent();
    SamiBroadcastableEvent(String* json);
    virtual ~SamiBroadcastableEvent();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBroadcastableEvent* fromJson(String* obj);

    String* getPClient();
    void setPClient(String* pClient);
    String* getPCustomer();
    void setPCustomer(String* pCustomer);
    Boolean* getPDoNotBroadcast();
    void setPDoNotBroadcast(Boolean* pDo_not_broadcast);
    String* getPSection();
    void setPSection(String* pSection);
    SamiObject* getPSource();
    void setPSource(SamiObject* pSource);
    String* getPSpecifics();
    void setPSpecifics(String* pSpecifics);
    Boolean* getPSynchronous();
    void setPSynchronous(Boolean* pSynchronous);
    Long* getPTimestamp();
    void setPTimestamp(Long* pTimestamp);
    String* getPType();
    void setPType(String* pType);

private:
    String* pClient;
String* pCustomer;
Boolean* pDo_not_broadcast;
String* pSection;
SamiObject* pSource;
String* pSpecifics;
Boolean* pSynchronous;
Long* pTimestamp;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiBroadcastableEvent_H_ */
