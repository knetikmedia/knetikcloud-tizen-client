/*
 * SamiCurrency.h
 * 
 * 
 */

#ifndef SamiCurrency_H_
#define SamiCurrency_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCurrency: public SamiObject {
public:
    SamiCurrency();
    SamiCurrency(String* json);
    virtual ~SamiCurrency();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCurrency* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    String* getPCode();
    void setPCode(String* pCode);
    Long* getPDateCreated();
    void setPDateCreated(Long* pDate_created);
    Long* getPDateUpdated();
    void setPDateUpdated(Long* pDate_updated);
    Double* getPFactor();
    void setPFactor(Double* pFactor);
    String* getPIcon();
    void setPIcon(String* pIcon);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPName();
    void setPName(String* pName);
    String* getPType();
    void setPType(String* pType);
    Boolean* getPVirtual();
    void setPVirtual(Boolean* pVirtual);

private:
    Boolean* pActive;
String* pCode;
Long* pDate_created;
Long* pDate_updated;
Double* pFactor;
String* pIcon;
Integer* pId;
String* pName;
String* pType;
Boolean* pVirtual;
};

} /* namespace Swagger */

#endif /* SamiCurrency_H_ */
