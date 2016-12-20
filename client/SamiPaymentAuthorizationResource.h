/*
 * SamiPaymentAuthorizationResource.h
 * 
 * 
 */

#ifndef SamiPaymentAuthorizationResource_H_
#define SamiPaymentAuthorizationResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
#include "SamiSimpleReferenceResource«int».h"
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;


namespace Swagger {

class SamiPaymentAuthorizationResource: public SamiObject {
public:
    SamiPaymentAuthorizationResource();
    SamiPaymentAuthorizationResource(String* json);
    virtual ~SamiPaymentAuthorizationResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPaymentAuthorizationResource* fromJson(String* obj);

    Boolean* getPCaptured();
    void setPCaptured(Boolean* pCaptured);
    Long* getPCreated();
    void setPCreated(Long* pCreated);
    SamiObject* getPDetails();
    void setPDetails(SamiObject* pDetails);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPInvoice();
    void setPInvoice(Integer* pInvoice);
    SamiSimpleReferenceResource«int»* getPPaymentType();
    void setPPaymentType(SamiSimpleReferenceResource«int»* pPayment_type);

private:
    Boolean* pCaptured;
Long* pCreated;
SamiObject* pDetails;
Integer* pId;
Integer* pInvoice;
SamiSimpleReferenceResource«int»* pPayment_type;
};

} /* namespace Swagger */

#endif /* SamiPaymentAuthorizationResource_H_ */
