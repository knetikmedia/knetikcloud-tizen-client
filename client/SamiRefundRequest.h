/*
 * SamiRefundRequest.h
 * 
 * 
 */

#ifndef SamiRefundRequest_H_
#define SamiRefundRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiRefundRequest: public SamiObject {
public:
    SamiRefundRequest();
    SamiRefundRequest(String* json);
    virtual ~SamiRefundRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRefundRequest* fromJson(String* obj);

    Double* getPAmount();
    void setPAmount(Double* pAmount);
    String* getPNotes();
    void setPNotes(String* pNotes);
    String* getPSku();
    void setPSku(String* pSku);

private:
    Double* pAmount;
String* pNotes;
String* pSku;
};

} /* namespace Swagger */

#endif /* SamiRefundRequest_H_ */
