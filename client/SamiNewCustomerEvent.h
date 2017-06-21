/*
 * SamiNewCustomerEvent.h
 * 
 * 
 */

#ifndef SamiNewCustomerEvent_H_
#define SamiNewCustomerEvent_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBroadcastableEvent.h"
#include "SamiCustomerConfig.h"
#include "SamiObject.h"
using Tizen::Base::Boolean;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiNewCustomerEvent: public SamiObject {
public:
    SamiNewCustomerEvent();
    SamiNewCustomerEvent(String* json);
    virtual ~SamiNewCustomerEvent();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNewCustomerEvent* fromJson(String* obj);

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
    SamiCustomerConfig* getPCustomerConfig();
    void setPCustomerConfig(SamiCustomerConfig* pCustomer_config);

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
SamiCustomerConfig* pCustomer_config;
};

} /* namespace Swagger */

#endif /* SamiNewCustomerEvent_H_ */
