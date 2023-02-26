static int e_old=0;
…
e_func = v_des - v_act; /* error function */
deriv = e_old - e_func; /* diff. of error fct. */
e_old = e_func; /* store error function */
r_mot = Kp*e_func + Kd*deriv; /* motor output */
r_mot = min(r_mot, +100); /* limit output */
r_mot = max(r_mot, -100); /* limit output */