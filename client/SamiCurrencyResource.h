/*
 * SamiCurrencyResource.h
 * 
 * 
 */

#ifndef SamiCurrencyResource_H_
#define SamiCurrencyResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCurrencyResource: public SamiObject {
public:
    SamiCurrencyResource();
    SamiCurrencyResource(String* json);
    virtual ~SamiCurrencyResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCurrencyResource* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    String* getPCode();
    void setPCode(String* pCode);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Double* getPFactor();
    void setPFactor(Double* pFactor);
    String* getPIcon();
    void setPIcon(String* pIcon);
    String* getPName();
    void setPName(String* pName);
    String* getPType();
    void setPType(String* pType);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Boolean* pActive;
String* pCode;
Long* pCreated_date;
Double* pFactor;
String* pIcon;
String* pName;
String* pType;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiCurrencyResource_H_ */
