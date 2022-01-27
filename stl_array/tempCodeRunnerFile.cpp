array<complex,3>cmplx;
    array<complex,3>::iterator i;
    cout<<"Enter the real and imaginary part of complex nos.";
    for(i=cmplx.begin();i<cmplx.end();i++)
    {
        
        i->insert();
    }
    cout<<"NUMBERS ENTERED ARE:\n";
    for(i=cmplx.begin();i<cmplx.end();i++)
    {
        
        i->view();
    }